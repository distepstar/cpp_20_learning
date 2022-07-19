#include <iostream>

int main(int argc, char **argv) {

  // local scoped -> died after lifetime
  {
    int local_scope_var{10};
    std::cout << local_scope_var << std::endl;
  }

  // Dynamically allocate the memory at runtime
  int *p_number4{nullptr};
  p_number4 =
      new int; // Dynamically allocate space for int on the heap
               // The memory belongs to our program, the system can't
               // use if for anything, until we return it
               // After this line executes, we will have a valid memory location
               // allocated, The size of the allocated memory will be such that
               // it can store the type pointed to by the pointer

  // Safe to do so if the memory is dynamically allocated
  *p_number4 = 77; // Writting into dynamically allocated memory
  std::cout << std::endl;
  std::cout << "Dynamically allocating memory: " << std::endl;
  std::cout << "*p_number_4: " << *p_number4 << std::endl;

  // Releasing and Reseting memory`

  int *p_number5{nullptr};
  p_number5 = new int;

  // return the memory to the operating system
  delete p_number5;
  // reset it to nullptr -> inform people that you dont have any valid data in
  // this ptr
  p_number5 = nullptr;

  // Initialize dynamic memory pointer
  int *ptr_number1{new int};
  int *ptr_number2{new int{22}};
  int *ptr_number3{new int{23}};

  std::cout << std::endl;
  std::cout << "Initialize with valid memory address at declaration: "
            << std::endl;
  std::cout << "ptr_number1: " << ptr_number1 << std::endl;
  std::cout << "*ptr_number1: " << *ptr_number1 << std::endl; // Junk value
  std::cout << "ptr_number2: " << ptr_number2 << std::endl;
  std::cout << "*ptr_number2: " << *ptr_number2 << std::endl;
  std::cout << "ptr_number3: " << ptr_number3 << std::endl;
  std::cout << "*ptr_number3: " << *ptr_number3 << std::endl;

  // Do not delete the same pointer twice
  delete ptr_number1;
  delete ptr_number2;
  delete ptr_number3;

  ptr_number1 = nullptr;
  ptr_number3 = nullptr;
  ptr_number3 = nullptr;

  // Same memory address in stack
  unsigned int reference_var{23};
  unsigned int *ptr_reference_var{&reference_var};

  std::cout << std::endl;
  std::cout << "reference_var: " << reference_var << std::endl;
  std::cout << "&reference_var: " << &reference_var
            << std::endl; // it will return the address
  std::cout << "ptr_reference_var: " << ptr_reference_var << std::endl;
  std::cout << "*ptr_reference_var: " << *ptr_reference_var << std::endl;

  // Bad Practice
  int reference_var2{55};
  int *ptr_reference_var2{new int(reference_var2)};
  ptr_reference_var2 = &reference_var2;

  std::cout << "reference_var2: " << reference_var2 << std::endl;
  std::cout << "&reference_var2: " << &reference_var2
            << std::endl; // it will return the address
  std::cout << "ptr_reference_var2: " << ptr_reference_var2 << std::endl;
  std::cout << "*ptr_reference_var2: " << *ptr_reference_var2 << std::endl;

  // delete ptr_reference_var2;
  // ptr_reference_var2 = nullptr;

  // if (!(ptr_reference_var2 == nullptr)) {
  //   std::cout << "ptr_reference_var2: " << ptr_reference_var2 << std::endl;
  //   std::cout << "*ptr_reference_var2: " << *ptr_reference_var2 << std::endl;
  // } else {
  //   std::cout << "NullPointerException" << std::endl;

  // }
  int *ptr_number4{new int{63}};
  int *ptr_number5{ptr_number4};

  std::cout << "*ptr_number4: " << *ptr_number4 << std::endl;
  std::cout << "*ptr_number4: " << ptr_number4 << std::endl;
  std::cout << "*ptr_number5: " << *ptr_number5 << std::endl;

  delete ptr_number4;
  ptr_number4 = nullptr;

  // ptr_number5 pointed to deleted memory, dereferencing it will lead to
  // undefined behaviour: Crash/ garbage or whatever
  std::cout << "*ptr_number5: " << ptr_number5 << std::endl;

  return 0;
}
