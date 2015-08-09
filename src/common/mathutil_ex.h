//http://www.boost.org/doc/libs/1_40_0/libs/math/doc/sf_and_dist/html/index.html

#include "boost\math\special_functions\round.hpp"
#include "boost\math\special_functions\asinh.hpp"
#include "boost\math\special_functions\acosh.hpp"
#include "boost\math\special_functions\atanh.hpp"
#include "boost\math\special_functions\trunc.hpp"

float roundf(float x)
{
    return boost::math::round(x);
}

float asinhf(float x)
{
    return boost::math::asinh(x);
}

float acoshf(float x)
{
    return boost::math::acosh(x);
}

float atanhf(float x)
{
    return boost::math::atanh(x);
}

float truncf(float x)
{
    return boost::math::trunc(x);
}

float exp2f(float x)
{
    return powf(2.0f, x);
}