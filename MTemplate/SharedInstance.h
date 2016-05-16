//.h
+(Class *)sharedInstance;

//.m
+(Class *)sharedInstance {
    static Class *sharedInstance;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedInstance = [[Class alloc] init];
    });
    return sharedInstance;
}
