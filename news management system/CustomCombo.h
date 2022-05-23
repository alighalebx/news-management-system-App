#pragma once
public ref class CustomCombo : public System::Windows::Forms::ComboBox
{
private: System::Windows::Forms::ComboBox^ combo1;
public:
    int idToDelete1;

    CustomCombo(int id1) {
        idToDelete1 = id1;
    }

};