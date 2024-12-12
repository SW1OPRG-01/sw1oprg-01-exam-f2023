class Wire {
  public: 
    Wire(double specificResistance, double crossSectionalArea, double length);
    double getModstand();
  private: 
    double length;
    double crossSectionalArea;
    double specificResistance;
};