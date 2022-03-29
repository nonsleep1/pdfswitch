#pragma once

#include "resources.g.h"

namespace winrt::pdfswitch::implementation
{
    struct resources : resourcesT<resources>
    {
        resources();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::pdfswitch::factory_implementation
{
    struct resources : resourcesT<resources, implementation::resources>
    {
    };
}
