class EventEngine
{
public :
    EventEngine() {
        set<EventEngine, &EventEngine::signalEvent>(this);
    }

private :
    void signalEvent(ev::sig &signal, int revents);
};

void EventEngine::signalEvent(ev::sig &signal, int revents)
{
    switch (signal.signum)
    {
    }
}