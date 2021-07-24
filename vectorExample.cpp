#include <iostream>
#include <string>
#include <vector>

struct semester_grade
{
  int grade;
  std::string subject;
};

void print_grade(semester_grade g)
{
  std::cout << g.subject << ", " << g.grade << "\n";
}

int main()
{
  std::vector<semester_grade> grades;
  grades.push_back({18, "Algebra"});
  grades.push_back({20, "Math"});
  grades.push_back({19, "Chemistry"});
  
  for(int i = 0; i < grades.size(); i++)
    print_grade(grades.at(i));
  
}