#include <iostream>
#include <iomanip>
#include "src/where.hpp"

static void printRow(const char* input,
  const char* query,
  int result,
  const char* type)
{
std::cout << std::left
<< std::setw(30) << input
<< std::setw(18) << query
<< std::setw(10) << result
<< std::setw(10) << type
<< "\n";
}

int main() {
const char* s = "Practice coding every day";

std::cout << "Example Output\n\n";
std::cout << std::left
<< std::setw(30) << "Input String"
<< std::setw(18) << "Search Query"
<< std::setw(10) << "Returns"
<< std::setw(10) << "Type"
<< "\n";

std::cout << std::string(30 + 18 + 10 + 10, '-') << "\n";

// Note: first 'c' is in "Practice" at index 3
printRow("\"Practice coding every day\"", "'c'", find(s, 'c'), "char");
printRow("\"Practice coding every day\"", "\"coding\"", find(s, "coding"), "string");
printRow("\"Practice coding every day\"", "' ' (space)", find(s, ' '), "char");
printRow("\"Practice coding every day\"", "\"day\"", find(s, "day"), "string");
printRow("\"Practice coding every day\"", "\"Java\"", find(s, "Java"), "string");

return 0;
}