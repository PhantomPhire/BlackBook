#include "Task.h"

namespace BlackBook
{
    /**
     * @brief Constructs a new instance of the Task class.
     * @param begin - The date and time when the Task begins.
     * @param duration - The duration of the task.
     */
    Task::Task(const QString& name, const QDateTime& begin, long long duration)
        : m_begin(begin),
          m_duration(duration)
    {
        setObjectName(name);
    }

    /**
     * @brief Deletes this instance of Task.
     */
    Task::~Task()
    {
    }
}
