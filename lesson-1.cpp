/*
Hi!
This block of text is called a comment.
Programmers use comments to explain things in code in more detail.
It's very useful, and you should take advantage of it when possible.
The two ways to write a comment are as follows:

Single Line:
// Use a double forward-slash.

Multiple Lines (Block):
Encapsulate the beginning of your text within a forward-slash (/) and asterisk (*), and end it with an asterisk (*) and a forward slash (/). You can see this done in this comment.

Comments will help clarify things in the future, so look out for these in future files!

*/
#include <iostream> // This line of code adds our "cout << " functionality.

using namespace std; // This tells the computer that things like cout and endl should start with std; 
// std::cout is the same thing as using namespace std; cout

int main() { // Every program you write in C++ must have this line. Think of it like the brain of your program, it gives out commands on what should happen.

cout << "Hello World!";
cout << endl;

/*
Here's what we did:
- We wrote "cout", to tell the computer that we would like to write something to the screen's stream.
- We used "<<", to denote that we are writing something to the stream.
- We used quotes to directly tell the computer that we would like to output this specific quote.
- Every line that isn't a brace should end with a semicolon!
- We then wrote another line of cout, but this time we would like to tell it to type an ENTER. This also tells it to clear the stream of anything else.
*/

return 0; // Finally, let's get out from main, to signify our program has finished. A zero denotes successful execution.

} // Don't forget to close the brace!
