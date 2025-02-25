#include <iostream>

using namespace std;

int main()
{
  int rows, cols;

  cout << "Enter YOur Desire Rows" << endl;
  cin >> rows;
  cout << "Enter YOur Desire Cols" << endl;
  cin >> cols;
  cout << "*************" << endl;
  for (int i = 1; i <= rows; i++)
  {

    for (int j = 1; j <= cols; j++)
    {
      if (i == 1 || i == rows || j == 1 || j == cols)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }
  system("pause");
}
