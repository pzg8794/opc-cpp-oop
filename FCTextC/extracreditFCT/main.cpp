#include <iostream>
#include <regex>
#include <string>

using namespace std;

void IsValidDummy(const string& p_input);
int main()
{
    IsValidDummy("00:01:00,0");
    IsValidDummy("99:59:59,10");
    IsValidDummy("test");
    IsValidDummy("99:59:59,hello");
    IsValidDummy("00:80:05,hello");
    
    
    
    
    return 0;
}

void IsValidDummy(const string& p_input)
{
    //HACK: I violate my personal coding convention by using an
    //      abbreviation here, but I couldn't get it to fit my blog
    const regex rgx("\\b(\\d\\d):([0-5]\\d):([0-5]\\d),(\\d)+\\b");
    smatch match;
    
    if(regex_match(p_input, match, rgx))
    {
        int timeout(atoi(match[1].str().c_str()) * 60 * 60);
        timeout += atoi(match[2].str().c_str()) * 60;
        timeout += atoi(match[3].str().c_str());
        int exitCode(atoi(match[4].str().c_str()));
        
        cout << p_input << " is valid: '" << timeout <<
        "' seconds and exit code '" << exitCode <<
        "'." << endl;
    }
    else
    {
        cout << p_input << " is not valid!" << endl;
    }
}