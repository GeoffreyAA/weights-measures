#ifndef __ENERGY_H__
#define __ENERGY_H__

class Energy
{
public:
	Energy(double J = 0.0);

	double getBtuISO() const;
	double getCalories() const;
	double getJoules() const;
	double getKilojoules() const;
	double getFootPoundForce() const;
	double getKilowattHours() const;
	double getErgs() const;
	double getElectronvolts() const;

	void setBtuISO(double x);
	void setCalories(double x);
	void setJoules(double x);
	void setKilojoules(double x);
	void setFootPoundForce(double x);
	void setKilowattHours(double x);
	void setErgs(double x);
	void setElectronvolts(double x);

private:
	double Joules;
};

#endif