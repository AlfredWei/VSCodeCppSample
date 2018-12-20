#include <chrono>
#include <iostream>

namespace perf
{
    class CTimeit
    {
        public:

        CTimeit( int nDivideCount = 1 ) : m_nDivideCount (nDivideCount) {
            m_start = std::chrono::steady_clock::now();
        }
        
        ~CTimeit() {
            std::cout << 
            std::chrono::duration_cast <std::chrono::microseconds> (
                std::chrono::steady_clock::now() - m_start
            ).count() / m_nDivideCount << std::endl;
        }

        private:
        std::chrono::steady_clock::time_point m_start;
        int m_nDivideCount;
    };

}