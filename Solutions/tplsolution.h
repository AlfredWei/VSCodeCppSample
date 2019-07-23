
#include <array>

namespace TplSolution {
    using namespace std;
    
    template < typename T, size_t N >
    constexpr size_t arraySize ( T (&)[N] ) noexcept {
        return N;
    }

    template< typename T >
    class TypeResolveViewer;

    void test_tpl_solution()
    {
        int arr[] = {1,2,3,4,6};
        array<int, arraySize(arr)> val;
    }
}