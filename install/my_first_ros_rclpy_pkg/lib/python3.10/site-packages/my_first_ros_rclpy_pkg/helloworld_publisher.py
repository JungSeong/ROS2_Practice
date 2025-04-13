import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from std_msgs.msg import String

class HelloworldPublisher(Node):

    """
    create_publisher(msg_type, topic, qos_profile, *, callback_group=None, event_callbacks=None)
        Create a new publisher.

        Parameters
        msg_type – The type of ROS messages the publisher will publish.

        topic (str) – The name of the topic the publisher will publish to.

        qos_profile (Union[QoSProfile, int]) – A QoSProfile or a history depth to apply to the publisher. In the case that a history depth is provided, the QoS history is set to RMW_QOS_POLICY_HISTORY_KEEP_LAST, the QoS history depth is set to the value of the parameter, and all other QoS settings are set to their default values.

        callback_group (Optional[CallbackGroup]) – The callback group for the publisher’s event handlers. If None, then the node’s default callback group is used.

        event_callbacks (Optional[PublisherEventCallbacks]) – User-defined callbacks for middleware events.

        Return type
        Publisher

        Returns
        The new publisher.
    """

    """
    create_timer(timer_period_sec, callback, callback_group=None, clock=None)
        Create a new timer.

        The timer will be started and every timer_period_sec number of seconds the provided callback function will be called.

        Parameters
        timer_period_sec (float) – The period (s) of the timer.

        callback (Callable) – A user-defined callback function that is called when the timer expires.

        callback_group (Optional[CallbackGroup]) – The callback group for the timer. If None, then the nodes default callback group is used.

        clock (Optional[Clock]) – The clock which the timer gets time from.

        Return type
        Timer
    """

    def __init__(self):
        super().__init__('helloworld_publisher')
        qos_profile = QoSProfile(depth=10) # 통신 상태가 원할하지 않으면 서브스크라이브 데이터를 버퍼에 10개 까지 저장
        self.helloworld_publisher = self.create_publisher(String, 'helloworld', qos_profile)
        self.timer = self.create_timer(1, self.publish_helloworld_msg)
        self.count = 0

    # callback function()
    def publish_helloworld_msg(self):
        msg = String()
        msg.data = 'Hello World: {0}'.format(self.count)
        self.helloworld_publisher.publish(msg)
        self.get_logger().info('Published message: {0}'.format(msg.data))
        self.count += 1

        if (self.count == 30) :
            raise Exception("publisher stop")

# entry point를 지정했기 때문에, ros2 run ~를 했을 때 실행 된다
def main(args=None):
    rclpy.init(args=args)
    node = HelloworldPublisher()
    try:
        rclpy.spin(node) # 생성한 노드를 spin, callback 함수를 실행시킨다.
    except KeyboardInterrupt:
        node.get_logger().info('Keyboard Interrupt (SIGINT)')
    finally:
        node.destroy_node()
        rclpy.shutdown()

# python3 helloworld_publisher.py를 입력 시 실행 된다
if __name__ == '__main__':
    main()