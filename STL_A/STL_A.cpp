//Hope Libecap
//STL_A
//5-2-22
//CIS 1202

#include <iostream>
#include <string>

using namespace std;

class invalidRangeException
{

};

class invalidCharacterExcpeption
{

};

char character(char start, int offset)
{
    int charValue = int(start);
    int result = charValue + offset;

    try 
    {
        if (charValue < 65 || (charValue > 90 && charValue < 97) || charValue > 122)
        {
            throw invalidCharacterExcpeption();
        }

        else if (result < 65 || (result > 90 && result < 97) || result > 122)
        {
            throw invalidRangeException();
        }
    }

    catch (invalidRangeException& exception2)
    {
        cout << "Invalid Range Exception ";
        return ' ';
    }

    catch (invalidCharacterExcpeption &exception1)
    {
        cout << "Invalid Character Exception ";
        return ' ';
    }
    return char(result);
}

int main()
{
    cout << character('a', 1) << endl;
    cout << character('a', -1) << endl;
    cout << character('Z', -1) << endl;
    cout << character('?', 5) << endl;
}