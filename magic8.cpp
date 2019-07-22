#include <iostream>
#include <cstdlib>

int main() {
  
  // Your future is here
  std::cout << "MAGIC 8-BALL:\n\n";

  srand(time(NULL));
  
  int choice = std::rand() % 10;
  
if (choice == 0) {
  std::cout << "It is certain. \n";
}

else if (choice == 1) {
  std::cout << "It is decidedly so.\n";
}

else if (choice == 2) {
  std::cout << "Without a doubt.\n";
}
else if (choice == 3) {
  std::cout << "Yes - definitely.\n";
}
else if (choice == 4) {
  std::cout << "You may rely on it.\n";
}
else if (choice == 5) {
  std::cout << "As I see it, yes.\n";
}
else if (choice == 6) {
  std::cout << "Most likely.\n";
}
else if (choice == 7) {
  std::cout << "Outlook good.\n";
}
else if (choice == 8) {
  std::cout << "Yes.\n";
}
else {
   std::cout << "Very Doubtful \n";
 }
return 0;
  
}
