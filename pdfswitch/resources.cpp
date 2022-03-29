#include "pch.h"
#include "resources.h"
#if __has_include("resources.g.cpp")
#include "resources.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::pdfswitch::implementation
{
    resources::resources()
    {
        InitializeComponent();
    }

    int32_t resources::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void resources::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void resources::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        Button().Content(box_value(L"Clicked"));
    }
}
