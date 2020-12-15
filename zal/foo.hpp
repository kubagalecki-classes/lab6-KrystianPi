#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());

    // Twoja implementacja tutaj
    std::for_each(people.begin(), people.end(), []( Human& czlowiek){ czlowiek.birthday();  });
    std::transform(people.crbegin(), people.crend() , ret_v.begin, []( const Human& czlowiek){ return czlowiek.isMonster()? 'n' : 'y' ;});
    return ret_v;
}
