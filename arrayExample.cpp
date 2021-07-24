#include <iostream>
#include <string>

struct semester_grade
{
  int grade;
  std::string subject;
};

void print_grade(semester_grade* g)
{
  std::cout << g->subject << ", " << g->grade << "\n";
}

int main()
{
  
  semester_grade* g = new semester_grade;
  g->grade = 20;
  g->subject = "Math";
  print_grade(g);
  delete g;

  semester_grade gs[1] = {{18, "Algebra"}};
  print_grade(&gs[0]);
  
}