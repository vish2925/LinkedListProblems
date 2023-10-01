#include <iostream>
#include <string>
using namespace std;
 string pretty_print_json(const  string& json_string, int indent = 2) {
   string output;
  int indentation_level = 0;

  for (char c : json_string) {
    if (c == '{' || c=='[') {
      output += c + '\n';
      output=output+"**";
      indentation_level += indent;
    } else if (c == '}' || c==']') {
      indentation_level -= indent;
      output +=  c + '\n';
    } 
    else if(c==',')
    output+='\n';
    else {
      output += + c;
    }
  }

  return output.substr(0, output.size() - 1); 
}

int main() {
  string json_string = "\"\{\"name\":\"John Doe\",\"age\":30,\"occupation\": \"Software Engineer\"\}\"";

string s=pretty_print_json(json_string);
cout<<s;

  return 0;
}



