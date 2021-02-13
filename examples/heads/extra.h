// WIP

#pragma once 

namespace str {
	namespace extra {
/*
char* cOccurence(char* argt, char* argn_1, char* argn_2) { // returns characters between argn_1 and argn_2 into argt
    uint m_argt; while(argt[m_argt]) m_argt++;
    uint m_argn_1; while(argn_1[m_argn_1]) m_argn_1++;
    uint m_argn_2; while(argn_2[m_argn_2]) m_argn_2++;
    uint pos1 = 0; // position of the start       | security mesure
    uint pos2 = 0; // position of the end barrier | security mesure

    for(uint i=0 ; argt[i] ; i++) {
        if(argt[i] == argn_1[0]) for(uint ii=0 ; argn_1[ii] ; ii++) {
            if(argt[i+ii] != argn_1[ii]) return 0;
            else if(ii == m_argn_1) pos1 = i;
			else if(!argn_1[ii] && !pos1) return 0;
        }
		if(argt[i] == argn_2[0] && i) for(uint iii=0 ; argn_2 ; iii++) {
			if(argt[i+iii] != argn_2[iii]) return 0;
			else if(iii = m_argn_2) pos2 = i-m_argn_2;
			else if(!argn_2[iii] && !pos2) return 0;
		}
        else return 0;
    }

	char* argf = ""; //char argf[len] = {0};
	uint j = 0;
	for(j ; j <= pos2-pos1 ; j++) {
		argf[j] = argt[pos1+j];
	}
    return argf;
}

bool isBetweenC(const char* argt, const char* argn, const char* args_1, const char* args_2) { // if argn is between args_1 and args_2 in argt
	uint m_args_1; while(args_1[m_args_1]) m_args_1++;
	uint m_args_2; while(args_2[m_args_2]) m_args_2++;
	uint pos1 = 0;
	uint pos2 = 0;

	for(uint i=0 ; argt[i] ; i++) {
		if(argt[i] == args_1[0]) for(uint ii=0 ; args_1[ii] ; ii++) {
			if(argt[i+ii] != args_1[ii]) return false;
            else if(ii == m_args_1) pos1 = i;
			else if(!args_1[ii] && !pos1) return false;
		}
		if(argt[i] == args_2[0] && i) for(uint iii=0 ; args_2 ; iii++) {
			if(argt[i+iii] != args_2[iii]) return false;
			else if(iii = m_args_2) pos2 = i;
			else if(!args_2[iii] && !pos2) return false;
		}
		else return false;
	}

	uint len = pos2 - pos1;
	uint start = pos1 + m_args_1;
	for(uint j=0 ; j <= len ; j++) {
		if(argt[start+j] != argn[j]) return false;
	}
	return true;
}

char* pOccurence(char* argt, uint pos1, uint pos2) { // return the characters between pos1 and pos2 into argt
	uint len = pos2 - pos1;
	char* argf = {0};

	for(uint i=0 ; argt[i] ; i++) {
		argf[i] = argt[i+pos1];
	}
	return argf;
}

bool isBetweenP(const char* argt, const char* argn, uint pos1, uint pos2) { // if argn is between pos1 and pos2 in argt
	for(uint i=0 ; argn[i] ; i++) {
		if(argt[i+pos1] != argn[i]) return false;
	}
	return true;
}*/
} }
