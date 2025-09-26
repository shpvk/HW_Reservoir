#include <type_traits>
class Reservoir
{
private:
    char* m_name;
    int m_width;
    int m_depth;
    int m_length;
public:
    Reservoir();
    Reservoir(const char* name, int width, int depth, int length);
    ~Reservoir();
    Reservoir(Reservoir& obj);


    void set_width(int width);
    void set_depth(int depth);

    int get_width();
    int get_depth();

    int find_volume();
    int find_area();
};