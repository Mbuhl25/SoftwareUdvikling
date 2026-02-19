class TotallyNotAScheme:
    def __init__(self):
        self.plan = []
        self.success = False

    def recruit_allies(self):
        self.plan.append("Convince friends with pizza 🍕")
        self.plan.append("Promise snacks & good vibes 😎")

    def execute_master_plan(self):
        if "snacks" in " ".join(self.plan):
            self.success = True
            return "Operation succeeded. Democracy replaced with nap time 🛌"
        return "Plan failed. Need more snacks."

scheme = TotallyNotAScheme()
scheme.recruit_allies()

print(scheme.execute_master_plan())
