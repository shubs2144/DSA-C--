C++ Arrays


// An array is a collection of items stored at contiguous memory locations.
// An array is a special variable, which can hold more than one value at a time. It is a collection of data items of the same type.
// Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the number of elements it should store:

string cars[4];

// In the example above, we declared a variable named cars that can hold four strings. The number in the square brackets indicates how many elements the array can hold.

string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

// To create an array of three integers, you could write:

int myNum[3] = {10, 20, 30};

// Access the Elements of an Array
// You access an array element by referring to the index number inside square brackets [].

// This statement accesses the value of the first element in cars:

Example
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cout << cars[0];
// Outputs Volvo
Note: Array indexes start with 0: [0] is the first element. [1] is the second element, etc.

// Change an Array Element
// To change the value of a specific element, refer to the index number:

cars[0] = "Opel";
Example
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cars[0] = "Opel";
cout << cars[0];
// Now outputs Opel instead of Volvo