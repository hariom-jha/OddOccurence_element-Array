#include <iostream>
#include <vector>
using namespace std;

int OddOccurence(vector<int> v)
{
  int s = 0;
  int e = v.size() - 1;
  int mid = s + (e - s) / 2;

  while (s <= e)
  {
    if (s == e)
    {
      // single element
      return s;
    }
    // now 2 cases either for even and odd
    if (mid % 2 == 0)
    {
      if (v[mid] == v[mid + 1])
      {
        s = mid + 2;
      }
      else
      {
        e = mid;
      }
    }
    else
    {
      if (v[mid] == v[mid - 1])
      {
        s = mid + 1;
      }
      else
      {
        e = mid - 1;
      }
    }
    mid = s + (e - s) / 2;
  }
  return -1;
}

int main()
{
  vector<int> v{1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 600, 4, 4};

  int ans = OddOccurence(v);

  cout << "The index is "
       << " " << ans << endl;
  cout << "the number is "
       << " " << v[ans] << endl;
  return 0;
}