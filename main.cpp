#include "include/block_matrix.hpp"
#include "include/exception_handling.hpp"
#include "include/menu.hpp"

int main()
{
    while(true)
    {
    	try
    	{ 
        	progress(menu());
    	}
    	catch(const std::exception& exception)
    	{
        	if(exception.what() == "choice") menu();
        	else if(exception.what() == "invalid_size") {
        		std::cerr << "Invalid size!";
        		menu();
        	}
        	else if(exception.what() == "invalid_index") {
        		std::cerr << "Invalid index!";
        		menu();
        	} else if(exception.what() == "invalid_matrix") {
        		std::cerr << "Invalid matrix!";
        		menu();
        	}
    	} 	
    }
    
}
