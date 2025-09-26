#include <type_traits>
class Reservoir
{
private:
    char* m_name;
    int m_width;
    int m_depth;
    int m_volume = m_width * m_depth;
    
public:
    Reservoir();
    ~Reservoir();
    Reservoir(Reservoir& obj);
    Reservoir operator= (int);
    bool operator== (Reservoir& obj);

    void set_width(int width);
    void set_depth(int depth);

    int get_width();
    int get_depth();
};