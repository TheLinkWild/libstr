#pragma once

#define int unsigned uint // time saving

class string {
public:
	string(char* argStr) {
		str = argStr;
		uint m__ = 0;
		while(str[m__]) m__++; // get the lenght of the string :>.
		m_str = m__;
	}

	char* getString() {
		return str;
	}
	uint getStringLenght() {
		uint m__ = 0;
		while(str[m__]) m__++; // get the lenght of the string :>.
		m_str = m__;
		return m_str;
	}
	void modifyString(char* arg) {
		if(!arg[0]) return;
		uint m__ = 0;
		str = arg;
		while(str[m__]) m__++; // get the lenght of the string :>.
		m_str = m__;
		return;
	}

	/*void destroy() {
		~string();
		return;
	}*/

	/*operator=(char* arg) {
		return arg;
	}*/
	
	/////////////////////////

	bool startswith(char* arg) { // if the object starts with arg
    	for(uint i=0 ; arg[i] ; i++) {
        	if(str[i] != arg[i]) return false;
    	}
    	return true;
	}

	bool endswith(char* arg) { // if the object ends with arg
		uint m_argt = m_str;
		uint m_arg; while(arg[m_arg]) m_arg++;
		for(m_argt ; m_arg-1 ; m_argt--) {
	    	if(str[m_argt] != arg[m_arg]) return false;
	    	m_arg--;
    	}
    	return true;
	}

	bool contains(char* arg) { // if the object does containa arg
		for(uint i=0 ; str[i] ; i++) {
	        uint j;
	        for(j=0 ; arg[j] ; j++) {
	           if(str[i+j] != arg[j]) break;
	        }
	        if(arg[j]==0) return true;
	    }
	    return false;
	}

	bool isOnPos(uint pos, char* arg) { // if arg is on the given position (pos) in the object
	    uint i = 0;
	    for(pos ; arg[i] ; pos++) {
	        if(str[pos] != arg[i]) return false;
	        i++;
	    }
	    return true;
	}

	int firstOccurence(char* arg, uint pos) { // returns the first occurence of arg in the object, starting from pos
	    uint j = 0;
	    uint i = pos;
	    for(i ; str[i] ; i++) {
	        if(str[i] == arg[j]) {
	            uint ii = i;
	            for(j=0 ; arg[j] ; j++) {
	                if(str[ii] != arg[j]) return -1;
	                ii++;
	            }
	            return i;
	        }
	    }
    
	    return -1;
	}

private:
	char* str;
	uint m_str;
	// ~string() {}
};
