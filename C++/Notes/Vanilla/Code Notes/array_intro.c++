#include <iostream>



int main(){

    //Declare an array of ints
    int scores [10]; // Junk data

    //Read data

    std:: cout << " scores [0] : " << scores[0] << std::endl;
    std:: cout << " scores [1] : " << scores[1] << std::endl;
   

    //Read with a loop
    for( size_t i {0} ; i < 10 ; ++i){
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }

    scores[0] = 20;
    scores[1] = 21;
    scores[2] = 22;

    //Print the data out
    for( size_t i {0} ; i < 10 ; ++i){
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }


   for(size_t i{0}; i < 10 ; ++i){
       scores[i] = i * 10;
   }

    //Print the data out
    for( size_t i {0} ; i < 10 ; ++i){
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }

    //Declare and initialize at the same time

	double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};
	
	for(size_t i{0}; i < 5; ++i){
		std::cout << "salary[" << i << "] : " << salaries[i] << std::endl;
	}

    //If you don't initialize all the elements, those you leave out
    //are initialized to 0
    int families[5] {12, 7, 5};
	
	for(size_t i{0}; i < 5; ++i){
		std::cout << "families[" << i << "] : " << families[i] << std::endl;
	}
    

   	//Omit the size of the array at declaration
    int class_sizes[] {10,12,15,11,18,17,23,56}; 
	
	// Will print this with a range based for loop
	for(auto value : class_sizes){
		std::cout << "value : " << value << std::endl;
	}
    

    // Read only arrays
    const int birds[] {10,12,15,11,18,17,23,56}; 

    // BELOW WONT WORKS
    // birds[2] = 8;

    //Sum up scores array, store result in sum
 
    int scores2 [] {2,5,8,2,5,6,9};
    int sum {0};
    
    for( int element : scores2){
        sum += element;
    }
    std::cout << "Score sum : " << sum << std::endl;
    /*
    Each time through the loop, the variable element takes on the value of the next item in scores2.
    Example: If scores2 = {10, 20, 30}, then element will be 10, then 20, then 30.
    */
  
   
    // SIZE OF ARRAY
    int scores3 [] {1,2,5,4,6,1,8,9,2,1};

   
    int count { std::size(scores3)}; // std::size( C++17)

    std::cout << "sizeof(scores) : " << sizeof(scores3) << std::endl;
    std::cout << "sizeof(scores[0]) : " << sizeof(scores3[0]) << std::endl;
    std::cout << "count : " << count << std::endl;

    int count6 {sizeof(scores)/sizeof(scores[0])};

    for(size_t i {0} ; i < count6 ; ++i){
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }
 
    for ( auto i : scores){
            std::cout << "value  : " << i << std::endl;  // same like for i in scores for python
    }
    
   
    
    return 0;
}