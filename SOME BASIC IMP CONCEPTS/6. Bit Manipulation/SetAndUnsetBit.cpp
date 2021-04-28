1.) To set or turn ON bit:

	int turnOnIthBit_OR_SetBit(int n, int i)
	{
	    
	    n = n | 1<<i;
	    return n;
	}

////////////////////////////////////////////////

2.) To unset or turn OFF bit:
	
	int turnOffIthBit(int n, int i)
	{
   
    n = n & ~(1<<i);
    return n;
    
	}

////////////////////////////////////////////////
