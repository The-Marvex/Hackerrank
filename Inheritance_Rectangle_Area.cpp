class Rectangle{
    public:int width,height;
public: void display()
    {
        cout<<width<<" "<<height<<endl;
    }
};
class RectangleArea: public Rectangle{
public:  void read_input(){
        cin>>width>>height;
    }
public: void display()
    {
        cout<<(width*height);
    }
};