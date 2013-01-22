#include <stdio.h>
int main(void)
{
	float low = -40, high = 140, step = 2, f, c = low; // int changed to float
	printf("+=======+=======+\n");
	printf("|    ºC |  ºF   |\n");
	printf("+=======+=======+\n");
	while (c <= high)
	{
		f = 32+9*c/5;
		printf("|%6.0f | %6.2f|\n", c, f); // %6d changed to %6f and %6.2f
		printf("+-------+-------+\n");
		c = c + step;
	}
	return 0;
}
// output:
//    -40 	    -40    -38 	    -36    -36 	    -32    -34 	    -29    -32 	    -25    -30 	    -22    -28 	    -18    -26 	    -14    -24 	    -11    -22 	     -7    -20 	     -4    -18 	      0    -16 	      4    -14 	      7    -12 	     11    -10 	     14     -8 	     18     -6 	     22     -4 	     25     -2 	     29      0 	     32      2 	     35      4 	     39      6 	     42      8 	     46     10 	     50     12 	     53     14 	     57     16 	     60     18 	     64     20 	     68     22 	     71     24 	     75     26 	     78     28 	     82     30 	     86     32 	     89     34 	     93     36 	     96     38 	    100     40 	    104     42 	    107     44 	    111     46 	    114     48 	    118     50 	    122     52 	    125     54 	    129     56 	    132     58 	    136     60 	    140     62 	    143     64 	    147     66 	    150     68 	    154     70 	    158     72 	    161     74 	    165     76 	    168     78 	    172     80 	    176     82 	    179     84 	    183     86 	    186     88 	    190     90 	    194     92 	    197     94 	    201     96 	    204     98 	    208    100 	    212    102 	    215    104 	    219    106 	    222    108 	    226    110 	    230    112 	    233    114 	    237    116 	    240    118 	    244    120 	    248    122 	    251    124 	    255    126 	    258    128 	    262    130 	    266    132 	    269    134 	    273    136 	    276    138 	    280    140 	    284