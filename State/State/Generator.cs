public class Generator
{
    private IGeneratorState currentState;

    public Generator()
    {
        // Начальное состояние - выключено
        currentState = new OffState();
    }

    public void SetState(IGeneratorState state)
    {
        currentState = state;
    }

    public void TurnOn()
    {
        currentState.TurnOn();
        SetState(new LowPowerState());
    }

    public void TurnOff()
    {
        currentState.TurnOff();
        SetState(new OffState());
    }

    public void IncreasePower()
    {
        currentState.IncreasePower();
        if (currentState is LowPowerState)
        {
            SetState(new MediumPowerState());
        }
        else if (currentState is MediumPowerState)
        {
            SetState(new HighPowerState());
        }
    }

    public void DecreasePower()
    {
        currentState.DecreasePower();
        if (currentState is HighPowerState)
        {
            SetState(new MediumPowerState());
        }
        else if (currentState is MediumPowerState)
        {
            SetState(new LowPowerState());
        }
    }
}
