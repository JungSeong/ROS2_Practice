import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from std_msgs.msg import String


class HelloworldSubscriber(Node):

    """
    create_subscription(msg_type, topic, callback, qos_profile, *, callback_group=None, event_callbacks=None, raw=False)
        Create a new subscription.

        Parameters
        msg_type – The type of ROS messages the subscription will subscribe to.

        topic (str) – The name of the topic the subscription will subscribe to.

        callback (Callable[[~MsgType], None]) – A user-defined callback function that is called when a message is received by the subscription.

        qos_profile (Union[QoSProfile, int]) – A QoSProfile or a history depth to apply to the subscription. In the case that a history depth is provided, the QoS history is set to RMW_QOS_POLICY_HISTORY_KEEP_LAST, the QoS history depth is set to the value of the parameter, and all other QoS settings are set to their default values.

        callback_group (Optional[CallbackGroup]) – The callback group for the subscription. If None, then the nodes default callback group is used.

        event_callbacks (Optional[SubscriptionEventCallbacks]) – User-defined callbacks for middleware events.

        raw (bool) – If True, then received messages will be stored in raw binary representation.

        Return type
        Subscription
    """

    def __init__(self):
        super().__init__('Helloworld_subscriber')
        qos_profile = QoSProfile(depth=10)
        self.helloworld_subscriber = self.create_subscription(
            String,
            'helloworld',
            self.subscribe_topic_message,
            qos_profile)

    def subscribe_topic_message(self, msg):
        self.get_logger().info('Received message: {0}'.format(msg.data))

# entry point를 지정했기 때문에, ros2 run ~를 했을 때 실행 된다
def main(args=None):
    rclpy.init(args=args)
    node = HelloworldSubscriber()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Keyboard Interrupt (SIGINT)')
    finally:
        node.destroy_node()
        rclpy.shutdown()

# python helloworld_publisher.py를 입력 시 실행 된다
if __name__ == '__main__':
    main()