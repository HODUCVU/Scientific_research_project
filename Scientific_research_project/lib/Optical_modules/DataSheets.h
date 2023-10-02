//rate between two drops
double timeDrops[2];
// Infusion rate data sheet
class Medicine{
    private:
        String name_medicine;
        double rateDrops; // enter from keyboard?
        double weightPatient;
    public:
        Medicine() {}
        //For data to DataSheet
        Medicine(String n, double r) {name_medicine = n; rateDrops = r;}
        //For data from keyboard
        Medicine(String n, double r, double w) { name_medicine = n; rateDrops = r; weightPatient = w;}

        void setName(String n)  { name_medicine = n;}
        void setRateDrops(double r)   { rateDrops = r;}
        void setWeightPatient(double w)    { weightPatient = w;}

        String getName() { return name_medicine;}
        double getRateDrops() { return rateDrops;}
        double getWeithtPatient()  {return weightPatient;}
        double getInfusionRateStd() { 
            /*
                Glucose: 0.8 drops/minutes
                => 1/0.8 = 1.25 = 1'15s
            */
            double infusionrateStd = 1/rateDrops; // drops/minutes
            return infusionrateStd;
        }
};
// DataSheet about medicine
Medicine DataSheetOfMedicines[] = {Medicine("Glucose 10%", 0.8), Medicine("Ringer Lactate", 2), Medicine("Natri Cloric 0.9%", 1.2)};
// To save on database for patients's information
class Patients : public Medicine {
    private:
        String name_patient;
        int age;
    public:
        Patients(String name_patient, int age, double weight, String name_medicine, double rateDrops) 
        : Medicine(name_medicine, rateDrops, weight) {
            this->name_patient = name_patient;
            this->age = age;
        }
        Patients() {}
        int getAgePatient() { return age;}
        String getNamePatient() { return name_patient;}
};