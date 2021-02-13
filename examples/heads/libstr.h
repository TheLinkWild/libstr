// libstr
// is meant to be included as header file; there is no other headers/libraries needed, all of the code can run with native C/C++

#pragma once

#ifdef DO_NAMESPACE
namespace str {
	bool contains(char* argt, char* argn) { // if argn is contain into argt
		for(uint i=0 ; argt[i] ; i++) {
	        uint j;
	        for(j=0 ; argn[j] ; j++) {
	           if(argt[i+j] != argn[j]) break;
	        }
	        if(argn[j]==0) return true;
	    }
	    return false;
	}
 
	bool startswith(char* argt, char* argn) { // if argt starts with argn
    	for(uint i=0 ; argn[i] ; i++) {
        	if(argt[i] != argn[i]) return false;
    	}
    	return true;
	}
 
	bool endswith(char* argt, char* argn) { //if argt ends eith argn
	    uint m_argt; while(argt[m_argt]) m_argt++; 
	    uint m_argn; while(argn[m_argn]) m_argn++;
	    for(m_argt ; m_argn-1 ; m_argt--) {
	        if(argt[m_argt] != argn[m_argn]) return false;
	        m_argn--;
	    }
	    return true;
	}

	bool isOnPos(char* argt, uint pos, char* argn) { // if argn is on the given position (pos) in argt
	    uint i = 0;
	    for(pos ; argn[i] ; pos++) {
	        if(argt[pos] != argn[i]) return false;
	        i++;
	    }
	    return true;
	}

	int firstOccurence(char* argt, char* argn, uint pos) { // look for first occurence of argn into argt, starting from pos
	    uint j = 0;
	    uint i = pos;
	    for(i ; argt[i] ; i++) {
	        if(argt[i] == argn[j]) {
	            uint ii = i;
	            for(j=0 ; argn[j] ; j++) {
	                if(argt[ii] != argn[j]) return -1;
	                ii++;
	            }
	            return i;
	        }
	    }
    
	    return -1;
	}
} // namespace end
#endif

#ifndef DO_NAMESPACE
bool contains(char* argt, char* argn) { // if argn is contain into argt
	for(uint i=0 ; argt[i] ; i++) {
        uint j;
        for(j=0 ; argn[j] ; j++) {
           if(argt[i+j] != argn[j]) break;
        }
        if(argn[j]==0) return true;
    }
    return false;
}
 
bool startswith(char* argt, char* argn) { // if argt starts with argn
    for(uint i=0 ; argn[i] ; i++) {
        if(argt[i] != argn[i]) return false;
    }
    return true;
}
 
bool endswith(char* argt, char* argn) { //if argt ends eith argn
	uint m_argt; while(argt[m_argt]) m_argt++; 
	uint m_argn; while(argn[m_argn]) m_argn++;
	for(m_argt ; m_argn-1 ; m_argt--) {
	    if(argt[m_argt] != argn[m_argn]) return false;
	    m_argn--;
    }
    return true;
}

bool isOnPos(char* argt, uint pos, char* argn) { // if argn is on the given position (pos) in argt
    uint i = 0;
    for(pos ; argn[i] ; pos++) {
        if(argt[pos] != argn[i]) return false;
        i++;
    }
    return true;
}

int firstOccurence(char* argt, char* argn, uint pos) { // look for first occurence of argn into argt, starting from pos
    uint j = 0;
    uint i = pos;
    for(i ; argt[i] ; i++) {
        if(argt[i] == argn[j]) {
            uint ii = i;
            for(j=0 ; argn[j] ; j++) {
                if(argt[ii] != argn[j]) return -1;
                ii++;
            }
            return i;
        }
    }
    
    return -1;
}
#endif
