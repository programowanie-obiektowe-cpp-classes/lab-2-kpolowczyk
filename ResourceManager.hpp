#pragma once

#include "Resource.hpp"

class ResourceManager
{
public:
    // Konstruktor domyślny: Alokuje zasób w pamięci
    ResourceManager()
    {
        resource_ptr = new Resource();
    }

    // Destruktor: zwalnia pamięć zasobu
    ~ResourceManager()
    {
        delete resource_ptr;
    }

    // Funkcja dostępu do zasobu bezpośrednio z pola tablicy `tab`
    double getResourceValue() const
    {
        return (*resource_ptr).tab[Resource::get_index];
    }

    double get()
    {
        return (*resource_ptr).get();
    }

    private:
    Resource* resource_ptr; // Surowy wskaźnik do zasobu
};
