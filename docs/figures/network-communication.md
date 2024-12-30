```mermaid
sequenceDiagram
    participant Device as Edge Device
    participant Cloud as Cloud Server
    participant App as Mobile App
    participant User as User
    
    Device->>Cloud: Send sensor data
    Device->>Cloud: Stream video feed
    Cloud->>Cloud: Process data
    Cloud->>App: Push notifications
    App->>User: Display alerts
    User->>App: User interaction
    App->>Cloud: Control commands
    Cloud->>Device: Execute commands
```
