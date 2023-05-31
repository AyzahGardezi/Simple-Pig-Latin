using namespace std;
std::string pig_it(std::string str)
{
  string store;
  int i = 0;
  string result = "";
  int length = str.length();
  
  cout << str;
  
  while (i < length)
    {
      if (str[i] < 65 || str[i] > 122 || ((str[i] >= 91) && (str[i] <= 96)))
      {
        result += str[i++];
      }
    
    else
      {
      store = str[i++];
    
      while ((str[i] >= 65 && str[i] < 91) || (str[i] > 96 && str[i] <= 122))
        {
        result += str[i++];
      }
    result += (store + "ay");
    }
  }
  
  return result;
}
