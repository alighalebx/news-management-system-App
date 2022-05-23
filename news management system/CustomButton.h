#pragma once
public ref class CustomButton : public ComponentFactory::Krypton::Toolkit::KryptonButton
{
    
public:
    int idToDelete;

    CustomButton(int id) {
        idToDelete = id;
    }

};

