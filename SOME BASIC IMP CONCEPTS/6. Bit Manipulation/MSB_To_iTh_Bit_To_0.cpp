Set MSB to i'th bit to clear/0:

int m = (1<<i)-1;
n=n&m;
return n;
