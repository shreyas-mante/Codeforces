Set to clear/0 from i'th bit to LSB:

int m = ~((1<<(i+1))-1);
n=n&m;
return n;
