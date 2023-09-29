#include <utils.h>

void changeClipboard(std::string text){
	if (!OpenClipboard(NULL)){
		std::cout << "Failed to load Clipboard" << std::endl;
    	
		EmptyClipboard();
    	CloseClipboard();
    	
		std::cout << "Retrying..." << std::endl;
    	if (!OpenClipboard(NULL)) {
        	throw std::runtime_error("Failed to open Clipboard");
    	}
	}
	EmptyClipboard(); // Empty the clipboard
	
	HGLOBAL hText = GlobalAlloc(GMEM_MOVEABLE, text.size() + 1); // Allocate memory for the text
	if (hText == NULL) {
	    CloseClipboard();
	    return;
	}
	
	strcpy_s((char*)GlobalLock(hText), text.size() + 1, text.c_str()); // Copy the text to the allocated memory
	GlobalUnlock(hText);
	SetClipboardData(CF_TEXT, hText); // Set the clipboard data
	CloseClipboard(); // Close the clipboard
}
