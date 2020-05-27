class Integer{
    int val;
public:
    Integer(int x) : val(x) {}
    
    friend const Integer& operator--(Integer&);
    
    int get();
};
