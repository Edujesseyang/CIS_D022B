#include <iostream>
#include <string>
#include <vector>
using std::cout;

template <typename Type = std::string>
class TextBox
{
private:
    Type _title;
    Type _content;

public:
    TextBox(Type title, Type content) : _title(title), _content(content) {}
    void setTitle(Type title) { _title = title; }
    void setContent(Type content) { _content = content; }
    Type getTitle() const { return _title; }
    Type getContent() const { return _content; }
    void print() const 
    {
        cout << "Title: " << _title << "\nContent: " << _content << '\n';
    }
};

int main()
{
    TextBox<std::string> testBox1("Message: ", "How are you? ");
    testBox1.print();
    cout << "The title is \"" << testBox1.getTitle() << "\"\nThe content is \"" << testBox1.getContent() << "\"\n";

    TextBox<int> numBox(15, 20);
    numBox.print();

    return 0;
}