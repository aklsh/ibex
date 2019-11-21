// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#ifndef SIM_CTRL_EXTENSION_H_
#define SIM_CTRL_EXTENSION_H_

class SimCtrlExtension {
 public:
  /**
   * Parse command line arguments
   *
   * Process all recognized command-line arguments from argc/argv.
   *
   * @param argc, argv Standard C command line arguments
   * @param exit_app Indicate that program should terminate
   * @return Return code, true == success
   */
  virtual bool ParseCLIArguments(int argc, char **argv, bool &exit_app) {
    return true;
  }

  /**
   * Function to be called prior to executing the simulation
   */
  virtual void PreExec() {}

  /**
   * Function to be called every clock cycle
   */
  virtual void OnClock(unsigned long sim_time) {}

  /**
   * Function to be called after executing the simulation
   */
  virtual void PostExec() {}
};

#endif  // SIM_CTRL_EXTENSION_H_
