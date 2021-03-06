#ifndef _LIVE_WINDOW_H
#define _LIVE_WINDOW_H

#include "LiveWindowSendable.h"
#include "C:\WindRiver\workspace\output\tables/ITable.h"
#include "C:\WindRiver\workspace\output\Commands/Scheduler.h"
#include <vector>
#include <map>

struct LiveWindowComponent
{
	std::string subsystem;
	std::string name;
	bool isSensor;

	LiveWindowComponent()
	{}//WTF?
	LiveWindowComponent(std::string subsystem, std::string name, bool isSensor)
	{
		this->subsystem = subsystem;
		this->name = name;
		this->isSensor = isSensor;
	}
};

/**
 * The LiveWindow class is the public interface for putting sensors and actuators
 * on the LiveWindow.
 *
 * @author Brad Miller
 */
class LiveWindow {
public:
	static LiveWindow * GetInstance();
	void Run();
	void AddSensor(char *subsystem, char *name, LiveWindowSendable *component);
	void AddActuator(char *subsystem, char *name, LiveWindowSendable *component);
	void AddSensor(std::string type, int module, int channel, LiveWindowSendable *component);
	void AddActuator(std::string type, int module, int channel, LiveWindowSendable *component);
	
	bool IsEnabled() { return m_enabled; }
	void SetEnabled(bool enabled);

protected:
	LiveWindow();
	virtual ~LiveWindow();

private:
	void UpdateValues();
	void Initialize();
	void InitializeLiveWindowComponents();
	
	std::vector<LiveWindowSendable *> m_sensors;
	std::map<LiveWindowSendable *, LiveWindowComponent> m_components;
	
	static LiveWindow *m_instance;
	ITable *m_liveWindowTable;
	ITable *m_statusTable;
	
	Scheduler *m_scheduler;
	
	bool m_enabled;
	bool m_firstTime;
};

#endif

