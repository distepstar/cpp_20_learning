#include <iostream>

int main(int argc, char **argv) {

  // division in int
  // E.g. 31 / 10 = 3 -> the logic is to see how many 10 can fit into 31 slot
  //            31
  //  10        10        10      *1
  // modulus is the same concept
  // 31 % 10

  // Addition
  int number1{2};
  int number2{3};

  int result{number1 + number2};
  std::cout << "Result of addition: " << result << std::endl;

  // Subtraction
  result = number2 - number1;
  std::cout << "------------------------------" << std::endl;
  std::cout << "Result of subtractiob: " << result << std::endl;

  // Multiplication
  result = number1 * number2;
  std::cout << "------------------------------" << std::endl;
  std::cout << "Result of multiplication: " << result << std::endl;

  // Division
  result = number2 / number1;
  std::cout << "------------------------------" << std::endl;
  std::cout << "Result of division: " << result << std::endl;

  // Nodulus
  result = number2 % number1;
  std::cout << "------------------------------" << std::endl;
  std::cout << "Result of modulus: " << result << std::endl;

  // Association defined the operation do from the left or from the right
  // Precedence defined which operation do first -> E.g. multiplication first or
  // addition first
  // a + b*c -d/e -f+g

  int a{6};
  int b{3};
  int c{8};
  int d{9};
  int e{3};
  int f{2};
  int g{5};

  int result2 = a + b * c - d / e - f + g; // 6 + 24 - 3 - 2 + 5 = 30
  std::cout << "------------------------------" << std::endl;
  std::cout << "result: " << result2 << std::endl;

  // Prefix and suffix operation
  int value{5};

  std::cout << "------------------------------" << std::endl;
  // Suffix incrementing
  std::cout << "value++: " << value++ << std::endl;
  std::cout << "value--: " << value-- << std::endl;
  // Prefix incrementing
  std::cout << "++value: " << ++value << std::endl;
  std::cout << "--value: " << --value << std::endl;

  // Add up 5 to variable itself
  value += 5;
  std::cout << "------------------------------" << std::endl;
  std::cout << "value+=: " << value << std::endl;

  // Relational operator
  int numberLower{10};
  int numberHigher{20};

  // set boolean value to true and false
  std::cout << std::boolalpha;
  std::cout << "------------------------------" << std::endl;
  std::cout << "numberLower < numberHigher " << (numberLower < numberHigher)
            << std::endl;
  std::cout << "numberLower > numberHigher " << (numberLower > numberHigher)
            << std::endl;
  std::cout << "numberLower <= numberHigher " << (numberLower <= numberHigher)
            << std::endl;
  std::cout << "numberLower >= numberHigher " << (numberLower >= numberHigher)
            << std::endl;
  std::cout << "numberLower == numberHigher " << (numberLower == numberHigher)
            << std::endl;
  std::cout << "numberLower != numberHigher " << (numberLower != numberHigher)
            << std::endl;

  bool a_true{true};
  bool b_false{false};
  bool c_true{true};

  // AND logic gate -> either one is false equal to false
  std::cout << "------------------------------" << std::endl;
  std::cout << "a && b " << (a_true && b_false) << std::endl;
  std::cout << "a && c " << (a_true && c_true) << std::endl;
  std::cout << "a && b && c " << (a_true && b_false && c_true) << std::endl;

  // OR logic gate -> either one is true equal to true
  std::cout << "------------------------------" << std::endl;
  std::cout << "a || b " << (a_true || b_false) << std::endl;
  std::cout << "a || c " << (a_true || c_true) << std::endl;
  std::cout << "a || b || c " << (a_true || b_false || c_true) << std::endl;

  // NOT operation -> reverse the current state -> e.g. true to false
  std::cout << "------------------------------" << std::endl;
  std::cout << "!a " << !a_true << std::endl;
  std::cout << "!b  " << !b_false << std::endl;
  std::cout << "!c " << !c_true << std::endl;

  return 0;
}
