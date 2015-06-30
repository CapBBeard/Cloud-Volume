#include <openvdb/openvdb.h>
#include <iostream>

int main()
{
    // Initialize the OpenVDB library.  This must be called at least
    // once per program and may safely be called multiple times.
    openvdb::initialize();

    // Load in teapot
    openvdb::io::File file("utahteapot.vdb");;
    
    try {
        file.open();
    } catch (openvdb::Exception e) {
        std::cout << e.what() << std::endl;
        exit(-1);
    }

    // Iterate over grids, print to console
    for (openvdb::io::File::NameIterator nameIter = file.beginName();
        nameIter != file.endName(); ++nameIter)
    {
        std::cout << nameIter.gridName() << std::endl;        
    }
    
    // Cleanup
    file.close();
    
    return 0;
}
