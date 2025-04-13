import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/jungseong/robot_ws/install/topic_service_action_rclpy_final'
