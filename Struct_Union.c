// Structure is a user defined datatype in c language which allows us to combine data of different types together.

// Struct EX 
// {
//     int a;
//     float b;

// }X;

// To define a structure, you must use the struct statement. The struct statement defines a new data type,
// with more than or equal to one member.

// Union : Same like Structure one change only memory allocation
//Union in C is a special data type available in C that allows storing different data types in the same memory location. You can define a union with many members,
// but only one member can contain a value at any given time.
// Unions provide an efficient way of using the same memory location for multiple purposes.

// C program to illustrate differences
// between structure and Union

#include <stdio.h>// io is a inpute  output .h for header file
#include <string.h>

// declaring structure
struct struct_example
{
	int integer;
	float decimal;
	char name[20];
};

// declaring union

union union_example
{
	int integer;
	float decimal;
	char name[20];
};

void main()
{
	// creating variable for structure
	// and initializing values difference
	// six
	struct struct_example s={18,38,"geeksforgeeks"};

	// creating variable for union
	// and initializing values
	union union_example u={18,38,"geeksforgeeks"};

		
	printf("structure data:\n integer: %d\n"
				"decimal: %.2f\n name: %s\n",
				s.integer, s.decimal, s.name);
	printf("\nunion data:\n integer: %d\n"
				"decimal: %.2f\n name: %s\n",
				u.integer, u.decimal, u.name);


	// difference two and three
	printf("\nsizeof structure : %d\n", sizeof(s));
	printf("sizeof union : %d\n", sizeof(u));
	
	// difference five
	printf("\n Accessing all members at a time:");
	s.integer = 183;
	s.decimal = 90;
	strcpy(s.name, "geeksforgeeks");
	
	printf("structure data:\n integer: %d\n "
				"decimal: %.2f\n name: %s\n",
			s.integer, s.decimal, s.name);
	
	u.integer = 183;
	u.decimal = 90;
	strcpy(u.name, "geeksforgeeks");
	
	printf("\nunion data:\n integer: %d\n "
				"decimal: %.2f\n name: %s\n",
			u.integer, u.decimal, u.name);
	
	printf("\n Accessing one member at time:");
	
	printf("\nstructure data:");
	s.integer = 240;
	printf("\ninteger: %d", s.integer);
	
	s.decimal = 120;
	printf("\ndecimal: %f", s.decimal);
	
	strcpy(s.name, "C programming");
	printf("\nname: %s\n", s.name);
	
	printf("\n union data:");
	u.integer = 240;
	printf("\ninteger: %d", u.integer);
	
	u.decimal = 120;
	printf("\ndecimal: %f", u.decimal);
	
	strcpy(u.name, "C programming");
	printf("\nname: %s\n", u.name);
	
	//difference four
	printf("\nAltering a member value:\n");
	s.integer = 1218;
	printf("structure data:\n integer: %d\n "
				" decimal: %.2f\n name: %s\n",
				s.integer, s.decimal, s.name);
	
	u.integer = 1218;
	printf("union data:\n integer: %d\n"
		" decimal: %.2f\n name: %s\n",
			u.integer, u.decimal, u.name);
}
